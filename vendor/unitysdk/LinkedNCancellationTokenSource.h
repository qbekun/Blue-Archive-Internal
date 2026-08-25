#pragma once
#include "unitysdk.h"

#define LINKEDNCANCELLATIONTOKENSOURCE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93DC950)

	inline static constexpr unsigned int LinkedNCancellationTokenSource_TypeDefinitionIndex = 24062;

	class LinkedNCancellationTokenSource : public Il2CppObject
	{
	public:
		Il2CppObject* s_linkedTokenCancelDelegate; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LINKEDNCANCELLATIONTOKENSOURCE_.CCTOR_OFFSET))(nullptr);
		}

	};

