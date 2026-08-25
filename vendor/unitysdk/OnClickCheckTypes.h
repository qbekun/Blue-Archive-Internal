#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }
class IBase;

#define ONCLICKCHECKTYPES_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ONCLICKCHECKTYPES_VALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ONCLICKCHECKTYPES_.CTOR_OFFSET UNITYSDK_OFFSET(0xD94900)
#define ONCLICKCHECKTYPES_GET_FAILACTION_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int OnClickCheckTypes_TypeDefinitionIndex = 9730;

	class OnClickCheckTypes : public Il2CppObject
	{
	public:
		::System::Void Initialize(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLICKCHECKTYPES_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Validate(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + ONCLICKCHECKTYPES_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCLICKCHECKTYPES_.CTOR_OFFSET))(nullptr);
		}

		IBase* get_FailAction()
		{
			return ((IBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCLICKCHECKTYPES_GET_FAILACTION_OFFSET))(nullptr);
		}

	};

