#pragma once
#include "unitysdk.h"

#define EXPANDODATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x96B7EF0)
#define EXPANDODATA_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x96B86F0)
#define EXPANDODATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x96BDB20)
#define EXPANDODATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x96B8C60)
#define EXPANDODATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x96BDB30)
#define EXPANDODATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x96BDC20)
#define EXPANDODATA_UPDATECLASS_OFFSET UNITYSDK_OFFSET(0x96B8CA0)
#define EXPANDODATA_GETALIGNEDSIZE_OFFSET UNITYSDK_OFFSET(0x96BDC70)
#define EXPANDODATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96BDC80)

	inline static constexpr unsigned int ExpandoData_TypeDefinitionIndex = 33559;

	class ExpandoData : public Il2CppObject
	{
	public:
		ExpandoData* Empty; // 0x0
		::System::Dynamic::ExpandoClass* Class; // 0x10
		::Il2CppArray<::System::Object*>* _dataArray; // 0x18
		::System::Int32 _version; // 0x20

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EXPANDODATA_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + EXPANDODATA_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Version()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPANDODATA_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPANDODATA_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPANDODATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Dynamic::ExpandoClass* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Dynamic::ExpandoClass*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EXPANDODATA_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		ExpandoData* UpdateClass(::System::Dynamic::ExpandoClass* arg)
		{
			return (return (ExpandoData*(*)(::System::Dynamic::ExpandoClass*, ::PVOID))((::PBYTE)hIl2Cpp + EXPANDODATA_UPDATECLASS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetAlignedSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EXPANDODATA_GETALIGNEDSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPANDODATA_.CCTOR_OFFSET))(nullptr);
		}

	};

