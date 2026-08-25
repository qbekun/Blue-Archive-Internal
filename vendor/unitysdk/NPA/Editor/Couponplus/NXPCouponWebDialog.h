#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace NPA::Service { class NXPWebInfo; }

#define NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BEB3C0)
#define NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBDIALOG_CONFIGUREWEBINFO_OFFSET UNITYSDK_OFFSET(0x9BEB500)
#define NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBDIALOG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BEB580)

namespace NPA::Editor::Couponplus
{
	inline static constexpr unsigned int NXPCouponWebDialog_TypeDefinitionIndex = 26472;

	class NXPCouponWebDialog : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* CouponWebViewSize; // 0x0

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBDIALOG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::NPA::Service::NXPWebInfo* ConfigureWebInfo(::NPA::Service::NXPWebInfo* arg)
		{
			return (return (::NPA::Service::NXPWebInfo*(*)(::NPA::Service::NXPWebInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBDIALOG_CONFIGUREWEBINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COUPONPLUS_NXPCOUPONWEBDIALOG_.CCTOR_OFFSET))(nullptr);
		}

	};
}

