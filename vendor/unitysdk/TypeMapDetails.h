#pragma once
#include "unitysdk.h"

#define TYPEMAPDETAILS_GET_PATHMAPS_OFFSET UNITYSDK_OFFSET(0x4D1B00)
#define TYPEMAPDETAILS_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D13A0)

	inline static constexpr unsigned int TypeMapDetails_TypeDefinitionIndex = 37633;

	class TypeMapDetails : public Il2CppObject
	{
	public:
		::System::Boolean IncludeAllDerivedTypes; // 0x10
		Il2CppObject* _PathMaps_k__BackingField; // 0x18

		Il2CppObject* get_PathMaps()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEMAPDETAILS_GET_PATHMAPS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEMAPDETAILS_.CTOR_OFFSET))(nullptr);
		}

	};

