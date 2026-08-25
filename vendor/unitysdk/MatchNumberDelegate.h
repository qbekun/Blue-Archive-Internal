#pragma once
#include "unitysdk.h"

#define MATCHNUMBERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x934E6F0)
#define MATCHNUMBERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x934E7C0)

	inline static constexpr unsigned int MatchNumberDelegate_TypeDefinitionIndex = 23744;

	class MatchNumberDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MATCHNUMBERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::__DTString&* arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::__DTString&*, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MATCHNUMBERDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

