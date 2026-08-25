#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_RANDOMNUMBERARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1273600)
#define MX_LOGIC_BATTLES_RANDOMNUMBERARGS_GET_ENTITYCONDITIONID_OFFSET UNITYSDK_OFFSET(0x1273670)
#define MX_LOGIC_BATTLES_RANDOMNUMBERARGS_GET_RANDOMNUMBER_OFFSET UNITYSDK_OFFSET(0x1273680)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int RandomNumberArgs_TypeDefinitionIndex = 14048;

	class RandomNumberArgs : public Il2CppObject
	{
	public:
		::System::String* _EntityConditionId_k__BackingField; // 0x10
		::System::Int32 _RandomNumber_k__BackingField; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RANDOMNUMBERARGS_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_EntityConditionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RANDOMNUMBERARGS_GET_ENTITYCONDITIONID_OFFSET))(nullptr);
		}

		::System::Int32 get_RandomNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RANDOMNUMBERARGS_GET_RANDOMNUMBER_OFFSET))(nullptr);
		}

	};
}

