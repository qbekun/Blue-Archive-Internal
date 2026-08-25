#pragma once
#include "../../unitysdk.h"

#define MX_ASSETBUNDLES_PERMISSIONSRATIONALEDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x1445310)
#define MX_ASSETBUNDLES_PERMISSIONSRATIONALEDIALOG_ONGUI_OFFSET UNITYSDK_OFFSET(0x1445320)
#define MX_ASSETBUNDLES_PERMISSIONSRATIONALEDIALOG_DOMYWINDOW_OFFSET UNITYSDK_OFFSET(0x1445460)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int PermissionsRationaleDialog_TypeDefinitionIndex = 14949;

	class PermissionsRationaleDialog : public Il2CppObject
	{
	public:
		::System::Int32 kDialogWidth; // 0x0
		::System::Int32 kDialogHeight; // 0x0
		::System::Boolean windowOpen; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PERMISSIONSRATIONALEDIALOG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnGUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PERMISSIONSRATIONALEDIALOG_ONGUI_OFFSET))(nullptr);
		}

		::System::Void DoMyWindow(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_PERMISSIONSRATIONALEDIALOG_DOMYWINDOW_OFFSET))(arg, nullptr);
		}

	};
}

