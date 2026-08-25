#pragma once
#include "unitysdk.h"

#define BITARRAYENUMERATORSIMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D1D70)
#define BITARRAYENUMERATORSIMPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x92D1DC0)
#define BITARRAYENUMERATORSIMPLE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92D1DD0)
#define BITARRAYENUMERATORSIMPLE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x92D1F60)
#define BITARRAYENUMERATORSIMPLE_RESET_OFFSET UNITYSDK_OFFSET(0x92D20B0)

	inline static constexpr unsigned int BitArrayEnumeratorSimple_TypeDefinitionIndex = 25084;

	class BitArrayEnumeratorSimple : public Il2CppObject
	{
	public:
		::System::Collections::BitArray* bitarray; // 0x10
		::System::Int32 index; // 0x18
		::System::Int32 version; // 0x1C
		::System::Boolean currentElement; // 0x20

		::System::Void .ctor(::System::Collections::BitArray* arg)
		{
			((::System::Void(*)(::System::Collections::BitArray*, ::PVOID))((::PBYTE)hIl2Cpp + BITARRAYENUMERATORSIMPLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BITARRAYENUMERATORSIMPLE_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BITARRAYENUMERATORSIMPLE_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BITARRAYENUMERATORSIMPLE_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BITARRAYENUMERATORSIMPLE_RESET_OFFSET))(nullptr);
		}

	};

