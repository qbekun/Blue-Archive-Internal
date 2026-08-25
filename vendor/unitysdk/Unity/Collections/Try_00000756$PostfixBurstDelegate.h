#pragma once
#include "../../unitysdk.h"

#define UNITY_COLLECTIONS_TRY_00000756$POSTFIXBURSTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E39450)
#define UNITY_COLLECTIONS_TRY_00000756$POSTFIXBURSTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E39520)

namespace Unity::Collections
{
	inline static constexpr unsigned int Try_00000756$PostfixBurstDelegate_TypeDefinitionIndex = 37045;

	class Try_00000756$PostfixBurstDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_TRY_00000756$POSTFIXBURSTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, Block&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, Block&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_TRY_00000756$POSTFIXBURSTDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

