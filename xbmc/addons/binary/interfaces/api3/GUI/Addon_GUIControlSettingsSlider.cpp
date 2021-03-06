/*
 *      Copyright (C) 2015-2016 Team KODI
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with KODI; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "Addon_GUIControlSettingsSlider.h"
#include "addons/binary/interfaces/api3/AddonInterfaceBase.h"
#include "addons/binary/interfaces/api2/GUI/Addon_GUIControlSettingsSlider.h"
#include "addons/kodi-addon-dev-kit/include/kodi/api3/.internal/AddonLib_internal.hpp"

using namespace ADDON;

namespace V3
{
namespace KodiAPI
{

namespace GUI
{
extern "C"
{

void CAddOnControl_SettingsSlider::Init(struct CB_AddOnLib *interfaces)
{
  interfaces->GUI.Control.SettingsSlider.SetVisible            = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetVisible;
  interfaces->GUI.Control.SettingsSlider.SetEnabled            = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetEnabled;

  interfaces->GUI.Control.SettingsSlider.SetText               = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetText;
  interfaces->GUI.Control.SettingsSlider.Reset                 = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::Reset;

  interfaces->GUI.Control.SettingsSlider.SetIntRange           = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetIntRange;
  interfaces->GUI.Control.SettingsSlider.SetIntValue           = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetIntValue;
  interfaces->GUI.Control.SettingsSlider.GetIntValue           = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::GetIntValue;
  interfaces->GUI.Control.SettingsSlider.SetIntInterval        = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetIntInterval;

  interfaces->GUI.Control.SettingsSlider.SetPercentage         = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetPercentage;
  interfaces->GUI.Control.SettingsSlider.GetPercentage         = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::GetPercentage;

  interfaces->GUI.Control.SettingsSlider.SetFloatRange         = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetFloatRange;
  interfaces->GUI.Control.SettingsSlider.SetFloatValue         = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetFloatValue;
  interfaces->GUI.Control.SettingsSlider.GetFloatValue         = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::GetFloatValue;
  interfaces->GUI.Control.SettingsSlider.SetFloatInterval      = V2::KodiAPI::GUI::CAddOnControl_SettingsSlider::SetFloatInterval;
}

} /* extern "C" */
} /* namespace GUI */

} /* namespace KodiAPI */
} /* namespace V3 */
