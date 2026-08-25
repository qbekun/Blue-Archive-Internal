#pragma once
#include "../../unitysdk.h"

namespace FlatData { class CollectionUnlockType; }
namespace FlatData { class MultipleConditionCheckType; }

#define MX_DATA_COLLECTIONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1841E90)
#define MX_DATA_COLLECTIONINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1841EA0)
#define MX_DATA_COLLECTIONINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1841EB0)
#define MX_DATA_COLLECTIONINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1841EC0)
#define MX_DATA_COLLECTIONINFO_GET_UNLOCKCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1841ED0)
#define MX_DATA_COLLECTIONINFO_SET_UNLOCKCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1841EE0)
#define MX_DATA_COLLECTIONINFO_GET_UNLOCKCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1841EF0)
#define MX_DATA_COLLECTIONINFO_SET_UNLOCKCONDITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1841F00)
#define MX_DATA_COLLECTIONINFO_GET_UNLOCKCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1841F10)
#define MX_DATA_COLLECTIONINFO_SET_UNLOCKCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1841F20)
#define MX_DATA_COLLECTIONINFO_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1841F30)
#define MX_DATA_COLLECTIONINFO_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1841F40)
#define MX_DATA_COLLECTIONINFO_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1841F50)
#define MX_DATA_COLLECTIONINFO_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1841FC0)
#define MX_DATA_COLLECTIONINFO_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1842140)
#define MX_DATA_COLLECTIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1842350)

namespace MX::Data
{
	inline static constexpr unsigned int CollectionInfo_TypeDefinitionIndex = 15790;

	class CollectionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _GroupId_k__BackingField; // 0x18
		::FlatData::CollectionUnlockType* _UnlockConditionType_k__BackingField; // 0x20
		::System::Int64 _UnlockConditionCount_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _UnlockConditionParameter_k__BackingField; // 0x30
		::FlatData::MultipleConditionCheckType* _MultipleConditionCheckType_k__BackingField; // 0x38

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::FlatData::CollectionUnlockType* get_UnlockConditionType()
		{
			return (return (::FlatData::CollectionUnlockType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_GET_UNLOCKCONDITIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_UnlockConditionType(::FlatData::CollectionUnlockType* arg)
		{
			((::System::Void(*)(::FlatData::CollectionUnlockType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_SET_UNLOCKCONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UnlockConditionCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_GET_UNLOCKCONDITIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_UnlockConditionCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_SET_UNLOCKCONDITIONCOUNT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_UnlockConditionParameter()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_GET_UNLOCKCONDITIONPARAMETER_OFFSET))(nullptr);
		}

		::System::Void set_UnlockConditionParameter(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_SET_UNLOCKCONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::FlatData::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return (return (::FlatData::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MultipleConditionCheckType(::FlatData::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::FlatData::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckCondition(Il2CppObject* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_CHECKCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckCondition(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_CHECKCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckCondition(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_CHECKCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_COLLECTIONINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

