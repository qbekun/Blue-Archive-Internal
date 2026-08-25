#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define PLAYERINPUTBLOCK_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD98B10)
#define PLAYERINPUTBLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0xD98BA0)
#define PLAYERINPUTBLOCK_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD98BB0)

	inline static constexpr unsigned int PlayerInputBlock_TypeDefinitionIndex = 9782;

	class PlayerInputBlock : public Il2CppObject
	{
	public:
		::System::Boolean block; // 0x28

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYERINPUTBLOCK_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERINPUTBLOCK_.CTOR_OFFSET))(nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERINPUTBLOCK_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

	};

