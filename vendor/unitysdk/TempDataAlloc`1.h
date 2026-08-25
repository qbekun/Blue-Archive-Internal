#pragma once
#include "unitysdk.h"

#define TEMPDATAALLOC`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEMPDATAALLOC`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEMPDATAALLOC`1_ALLOC_OFFSET UNITYSDK_OFFSET(0x000000)
#define TEMPDATAALLOC`1_SESSIONDONE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TempDataAlloc`1_TypeDefinitionIndex = 30789;

	class TempDataAlloc`1 : public Il2CppObject
	{
	public:
		::System::Int32 maxPoolElemCount; // 0x0
		Il2CppObject* pool; // 0x0
		Il2CppObject* excess; // 0x0
		::System::UInt32 takenFromPool; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TEMPDATAALLOC`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEMPDATAALLOC`1_DISPOSE_OFFSET))(nullptr);
		}

		Il2CppObject* Alloc(::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + TEMPDATAALLOC`1_ALLOC_OFFSET))(arg, nullptr);
		}

		::System::Void SessionDone()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEMPDATAALLOC`1_SESSIONDONE_OFFSET))(nullptr);
		}

	};

