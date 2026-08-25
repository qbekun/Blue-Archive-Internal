#pragma once
#include "unitysdk.h"

#define EDGEPAIR_RESET_OFFSET UNITYSDK_OFFSET(0xA097920)
#define EDGEPAIR_CREATE_OFFSET UNITYSDK_OFFSET(0xA0971D0)

	inline static constexpr unsigned int EdgePair_TypeDefinitionIndex = 32828;

	class EdgePair : public Il2CppObject
	{
	public:
		Edge* _e; // 0x10
		Edge* _eSym; // 0x18

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEPAIR_RESET_OFFSET))(nullptr);
		}

		EdgePair* Create()
		{
			return (return (EdgePair*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEPAIR_CREATE_OFFSET))(nullptr);
		}

	};

