#pragma once
#include "unitysdk.h"

#define POOLED`1_FREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLED`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLED`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLED`1_ONFREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define POOLED`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Pooled`1_TypeDefinitionIndex = 32825;

	class Pooled`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _stack; // 0x0

		::System::Void Free()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOLED`1_FREE_OFFSET))(nullptr);
		}

		Il2CppObject* Create()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + POOLED`1_CREATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOLED`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnFree()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOLED`1_ONFREE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOLED`1_RESET_OFFSET))(nullptr);
		}

	};

