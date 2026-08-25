#pragma once
#include "unitysdk.h"

class From;

#define UIFROMHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2691530)

	inline static constexpr unsigned int UIFromHistory_TypeDefinitionIndex = 6770;

	class UIFromHistory : public Il2CppObject
	{
	public:
		From* UIFrom; // 0x10
		::System::Int64 ServerId; // 0x18
		::System::Int64 StageId; // 0x20

		::System::Void .ctor(From* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(From*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFROMHISTORY_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

