#pragma once
#include "unitysdk.h"

#define SHEETHANDLEKEYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA371550)
#define SHEETHANDLEKEYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA371570)
#define SHEETHANDLEKEYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA371540)

	inline static constexpr unsigned int SheetHandleKeyComparer_TypeDefinitionIndex = 30810;

	class SheetHandleKeyComparer : public Il2CppObject
	{
	public:
		::System::Boolean Equals(SheetHandleKey* arg, SheetHandleKey* arg)
		{
			return (return (::System::Boolean(*)(SheetHandleKey*, SheetHandleKey*, ::PVOID))((::PBYTE)hIl2Cpp + SHEETHANDLEKEYCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(SheetHandleKey* arg)
		{
			return (return (::System::Int32(*)(SheetHandleKey*, ::PVOID))((::PBYTE)hIl2Cpp + SHEETHANDLEKEYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHEETHANDLEKEYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

