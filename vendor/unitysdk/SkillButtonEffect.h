#pragma once
#include "unitysdk.h"

class UCPersonalityType;
class UIButtonBindType;
namespace MXUnderCover { class UCEntity; }

#define SKILLBUTTONEFFECT_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD9B230)
#define SKILLBUTTONEFFECT_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD9B240)
#define SKILLBUTTONEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9B2D0)

	inline static constexpr unsigned int SkillButtonEffect_TypeDefinitionIndex = 9806;

	class SkillButtonEffect : public Il2CppObject
	{
	public:
		UCPersonalityType* personality; // 0x28
		UIButtonBindType* button; // 0x2C

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLBUTTONEFFECT_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLBUTTONEFFECT_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLBUTTONEFFECT_.CTOR_OFFSET))(nullptr);
		}

	};

