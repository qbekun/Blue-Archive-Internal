#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Service::View { class NXPUserConsentView; }
namespace NPA::Editor::Network { class NXPUserConsentResponse; }

#define NPA_EDITOR_SERVICE_NXPUSERCONSENTDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C002D0)
#define NPA_EDITOR_SERVICE_NXPUSERCONSENTDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C004F0)
#define NPA_EDITOR_SERVICE_NXPUSERCONSENTDIALOG__SETCALLBACK_B__4_0_OFFSET UNITYSDK_OFFSET(0x9C00580)
#define NPA_EDITOR_SERVICE_NXPUSERCONSENTDIALOG__SETCALLBACK_B__4_1_OFFSET UNITYSDK_OFFSET(0x9C006A0)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int NXPUserConsentDialog_TypeDefinitionIndex = 26525;

	class NXPUserConsentDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Service::View::NXPUserConsentView* userConsentView; // 0x30
		Il2CppObject* callback; // 0x38
		::System::String* placementCode; // 0x40

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPUSERCONSENTDIALOG_.CTOR_OFFSET))(str, str, str, str, str, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPUSERCONSENTDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void _SetCallback_b__4_0(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPUSERCONSENTDIALOG__SETCALLBACK_B__4_0_OFFSET))(str, arg, nullptr);
		}

		::System::Void _SetCallback_b__4_1(::NPA::Editor::Network::NXPUserConsentResponse* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPUserConsentResponse*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPUSERCONSENTDIALOG__SETCALLBACK_B__4_1_OFFSET))(arg, nullptr);
		}

	};
}

