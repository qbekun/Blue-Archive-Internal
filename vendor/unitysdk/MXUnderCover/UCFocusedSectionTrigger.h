#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }
namespace MXUnderCover { class FocusedSectionMessage; }

#define MXUNDERCOVER_UCFOCUSEDSECTIONTRIGGER_UNINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD94FF0)
#define MXUNDERCOVER_UCFOCUSEDSECTIONTRIGGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD950A0)
#define MXUNDERCOVER_UCFOCUSEDSECTIONTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xD95170)
#define MXUNDERCOVER_UCFOCUSEDSECTIONTRIGGER_ONMESSAGE_OFFSET UNITYSDK_OFFSET(0xD951E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCFocusedSectionTrigger_TypeDefinitionIndex = 9736;

	class UCFocusedSectionTrigger : public Il2CppObject
	{
	public:
		::System::Void Uninitialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCFOCUSEDSECTIONTRIGGER_UNINITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCFOCUSEDSECTIONTRIGGER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCFOCUSEDSECTIONTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnMessage(::MXUnderCover::FocusedSectionMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::FocusedSectionMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCFOCUSEDSECTIONTRIGGER_ONMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

