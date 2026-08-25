#pragma once
#include "unitysdk.h"

#define PATHLISTCOMPARER_SYSTEM.COLLECTIONS.ICOMPARER.COMPARE_OFFSET UNITYSDK_OFFSET(0x9A5F430)
#define PATHLISTCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A5F5B0)
#define PATHLISTCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A5F5C0)

	inline static constexpr unsigned int PathListComparer_TypeDefinitionIndex = 29738;

	class PathListComparer : public Il2CppObject
	{
	public:
		PathListComparer* StaticInstance; // 0x0

		::System::Int32 System.Collections.IComparer.Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + PATHLISTCOMPARER_SYSTEM.COLLECTIONS.ICOMPARER.COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHLISTCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHLISTCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};

