#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define PLAYERMOVINGBLOCK_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD98CC0)
#define PLAYERMOVINGBLOCK_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD98D70)
#define PLAYERMOVINGBLOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0xD98D80)

	inline static constexpr unsigned int PlayerMovingBlock_TypeDefinitionIndex = 9784;

	class PlayerMovingBlock : public Il2CppObject
	{
	public:
		::System::Boolean block; // 0x28

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + PLAYERMOVINGBLOCK_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERMOVINGBLOCK_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAYERMOVINGBLOCK_.CTOR_OFFSET))(nullptr);
		}

	};

