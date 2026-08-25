#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0x9BEB5C0)
#define NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BEB570)

namespace NPA::Editor::Couponplus
{
	inline static constexpr unsigned int NXPCouponWebView_TypeDefinitionIndex = 26473;

	class NXPCouponWebView : public Il2CppObject
	{
	public:
		::System::Void Show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBVIEW_SHOW_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

