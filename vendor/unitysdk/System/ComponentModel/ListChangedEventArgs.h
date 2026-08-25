#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B35620)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B356E0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B35760)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B35680)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_LISTCHANGEDTYPE_OFFSET UNITYSDK_OFFSET(0x9B357D0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_NEWINDEX_OFFSET UNITYSDK_OFFSET(0x9B357E0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_OLDINDEX_OFFSET UNITYSDK_OFFSET(0x9B357F0)
#define SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_PROPERTYDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x9B35800)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ListChangedEventArgs_TypeDefinitionIndex = 29426;

	class ListChangedEventArgs : public Il2CppObject
	{
	public:
		::System::ComponentModel::ListChangedType* _ListChangedType_k__BackingField; // 0x10
		::System::Int32 _NewIndex_k__BackingField; // 0x14
		::System::Int32 _OldIndex_k__BackingField; // 0x18
		::System::ComponentModel::PropertyDescriptor* _PropertyDescriptor_k__BackingField; // 0x20

		::System::Void .ctor(::System::ComponentModel::ListChangedType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::ListChangedType* arg, ::System::Int32 arg, ::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedType*, ::System::Int32, ::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::ListChangedType* arg, ::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedType*, ::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::ListChangedType* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedType*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::ComponentModel::ListChangedType* get_ListChangedType()
		{
			return (return (::System::ComponentModel::ListChangedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_LISTCHANGEDTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_NewIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_NEWINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_OldIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_OLDINDEX_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* get_PropertyDescriptor()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LISTCHANGEDEVENTARGS_GET_PROPERTYDESCRIPTOR_OFFSET))(nullptr);
		}

	};
}

