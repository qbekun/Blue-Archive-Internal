#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define PLAYERHIDE_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD98EC0)
#define PLAYERHIDE_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD98ED0)
#define PLAYERHIDE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD98F80)

	inline static constexpr unsigned int PlayerHide_TypeDefinitionIndex = 9786;

	class PlayerHide : public Il2CppObject
	{
	public:
		::System::Boolean hide; // 0x28

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERHIDE_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYERHIDE_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERHIDE_.CTOR_OFFSET))(nullptr);
		}

	};

