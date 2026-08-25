#pragma once
#include "unitysdk.h"

#define ARENAMAPCONTENTOBJECT_SET_TERRAINTYPE_OFFSET UNITYSDK_OFFSET(0x21F5AC0)
#define ARENAMAPCONTENTOBJECT_GET_TERRAINTYPE_OFFSET UNITYSDK_OFFSET(0x21F5AD0)
#define ARENAMAPCONTENTOBJECT_GET_TERRAINNAMEKEY_OFFSET UNITYSDK_OFFSET(0x21F5AE0)
#define ARENAMAPCONTENTOBJECT_GET_MAPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x21F5AF0)
#define ARENAMAPCONTENTOBJECT_SET_TERRAINNAMEKEY_OFFSET UNITYSDK_OFFSET(0x21F5B00)
#define ARENAMAPCONTENTOBJECT_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x21F5B10)
#define ARENAMAPCONTENTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F5B20)
#define ARENAMAPCONTENTOBJECT_SET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x21F5BD0)
#define ARENAMAPCONTENTOBJECT_SET_MAPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x21F5BE0)

	inline static constexpr unsigned int ArenaMapContentObject_TypeDefinitionIndex = 4263;

	class ArenaMapContentObject : public Il2CppObject
	{
	public:
		::System::Int64 _TerrainType_k__BackingField; // 0x10
		::System::String* _MapImagePath_k__BackingField; // 0x18
		::System::String* _TerrainNameKey_k__BackingField; // 0x20
		Il2CppObject* _Elements_k__BackingField; // 0x28

		::System::Void set_TerrainType(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPCONTENTOBJECT_SET_TERRAINTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TerrainType()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPCONTENTOBJECT_GET_TERRAINTYPE_OFFSET))(nullptr);
		}

		::System::String* get_TerrainNameKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPCONTENTOBJECT_GET_TERRAINNAMEKEY_OFFSET))(nullptr);
		}

		::System::String* get_MapImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPCONTENTOBJECT_GET_MAPIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_TerrainNameKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPCONTENTOBJECT_SET_TERRAINNAMEKEY_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_Elements()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPCONTENTOBJECT_GET_ELEMENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPCONTENTOBJECT_.CTOR_OFFSET))(arg, str, str2, nullptr);
		}

		::System::Void set_Elements(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPCONTENTOBJECT_SET_ELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_MapImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPCONTENTOBJECT_SET_MAPIMAGEPATH_OFFSET))(str, nullptr);
		}

	};

