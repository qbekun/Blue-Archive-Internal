#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCCondition; }
class IBase;
namespace MXUnderCover { class UCEntity; }

#define CHECKCONDITION_GET_FAILACTION_OFFSET UNITYSDK_OFFSET(0xD94910)
#define CHECKCONDITION_VALIDATE_OFFSET UNITYSDK_OFFSET(0xD94920)
#define CHECKCONDITION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD94940)
#define CHECKCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD949F0)

	inline static constexpr unsigned int CheckCondition_TypeDefinitionIndex = 9729;

	class CheckCondition : public Il2CppObject
	{
	public:
		::MXUnderCover::UCCondition* Condition; // 0x10
		IBase* InvaildAction; // 0x18

		IBase* get_FailAction()
		{
			return ((IBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHECKCONDITION_GET_FAILACTION_OFFSET))(nullptr);
		}

		::System::Boolean Validate(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CHECKCONDITION_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CHECKCONDITION_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHECKCONDITION_.CTOR_OFFSET))(nullptr);
		}

	};

