#pragma once
#include "unitysdk.h"

#define ENUMFIELD_SET_CURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x9FB2C30)
#define ENUMFIELD_SET_GETINDEX_OFFSET UNITYSDK_OFFSET(0x9FB2C60)
#define ENUMFIELD_SET_AUTOENUM_OFFSET UNITYSDK_OFFSET(0x9FB2C70)
#define ENUMFIELD_SET_SETINDEX_OFFSET UNITYSDK_OFFSET(0x9FB2FB0)
#define ENUMFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB2FD0)
#define ENUMFIELD_INITINDEXES_OFFSET UNITYSDK_OFFSET(0x9FB2CD0)
#define ENUMFIELD_GET_SETINDEX_OFFSET UNITYSDK_OFFSET(0x9FB3010)
#define ENUMFIELD_GET_GETINDEX_OFFSET UNITYSDK_OFFSET(0x9FB3020)
#define ENUMFIELD_INITQUICKSEPARATORS_OFFSET UNITYSDK_OFFSET(0x9FB2DA0)
#define ENUMFIELD_GET_CURRENTINDEX_OFFSET UNITYSDK_OFFSET(0x9FB3030)

	inline static constexpr unsigned int EnumField_TypeDefinitionIndex = 33965;

	class EnumField : public GetToVectorDelegate
	{
	public:
		::Il2CppArray<::System::Object*>* enumNames; // 0x60
		::Il2CppArray<::System::Object*>* enumValues; // 0x68
		::Il2CppArray<::System::Object*>* quickSeparators; // 0x70
		::Il2CppArray<::System::Object*>* indexes; // 0x78
		Il2CppObject* _getIndex_k__BackingField; // 0x80
		Il2CppObject* _setIndex_k__BackingField; // 0x88

		::System::Void set_currentIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_SET_CURRENTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_getIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_SET_GETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_autoEnum(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_SET_AUTOENUM_OFFSET))(arg, nullptr);
		}

		::System::Void set_setIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_SET_SETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitIndexes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_INITINDEXES_OFFSET))(nullptr);
		}

		Il2CppObject* get_setIndex()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_GET_SETINDEX_OFFSET))(nullptr);
		}

		Il2CppObject* get_getIndex()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_GET_GETINDEX_OFFSET))(nullptr);
		}

		::System::Void InitQuickSeparators()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_INITQUICKSEPARATORS_OFFSET))(nullptr);
		}

		::System::Int32 get_currentIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENUMFIELD_GET_CURRENTINDEX_OFFSET))(nullptr);
		}

	};

