#pragma once
#include "unitysdk.h"

#define SHAREDOBJECTPOOLBASE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9F9D740)
#define SHAREDOBJECTPOOLBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SHAREDOBJECTPOOLBASE_CLEARALL_OFFSET UNITYSDK_OFFSET(0x9F9D5A0)
#define SHAREDOBJECTPOOLBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F9D7D0)

	inline static constexpr unsigned int SharedObjectPoolBase_TypeDefinitionIndex = 33851;

	class SharedObjectPoolBase : public Il2CppObject
	{
	public:
		Il2CppObject* s_AllocatedPools; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOLBASE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOLBASE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ClearAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOLBASE_CLEARALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHAREDOBJECTPOOLBASE_.CTOR_OFFSET))(nullptr);
		}

	};

