#pragma once
#include "../../unitysdk.h"

namespace MXField::Dispatch { class IPlayerInputBlocker; }

#define MXFIELD_DISPATCH_PLAYERINPUTBLOCKDISPATCH_GET_PREDICATE_OFFSET UNITYSDK_OFFSET(0xEC8C40)
#define MXFIELD_DISPATCH_PLAYERINPUTBLOCKDISPATCH_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEC8C50)
#define MXFIELD_DISPATCH_PLAYERINPUTBLOCKDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC8C60)
#define MXFIELD_DISPATCH_PLAYERINPUTBLOCKDISPATCH_ISPREDICATEMATCH_OFFSET UNITYSDK_OFFSET(0xEC8D90)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int PlayerInputBlockDispatch_TypeDefinitionIndex = 10899;

	class PlayerInputBlockDispatch : public Il2CppObject
	{
	public:
		::System::String* _Predicate_k__BackingField; // 0x18
		::System::Boolean _Block_k__BackingField; // 0x20

		::System::String* get_Predicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_PLAYERINPUTBLOCKDISPATCH_GET_PREDICATE_OFFSET))(nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_PLAYERINPUTBLOCKDISPATCH_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::MXField::Dispatch::IPlayerInputBlocker* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MXField::Dispatch::IPlayerInputBlocker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_PLAYERINPUTBLOCKDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsPredicateMatch(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_PLAYERINPUTBLOCKDISPATCH_ISPREDICATEMATCH_OFFSET))(str, nullptr);
		}

	};
}

