#pragma once
#include "unitysdk.h"

#define METAEXPANDO_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B91E0)
#define METAEXPANDO_BINDGETORINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x96BBD60)
#define METAEXPANDO_BINDGETMEMBER_OFFSET UNITYSDK_OFFSET(0x96BC960)
#define METAEXPANDO_BINDINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x96BCA50)
#define METAEXPANDO_BINDSETMEMBER_OFFSET UNITYSDK_OFFSET(0x96BCC10)
#define METAEXPANDO_BINDDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x96BD280)
#define METAEXPANDO_GETDYNAMICMEMBERNAMES_OFFSET UNITYSDK_OFFSET(0x96BD680)
#define METAEXPANDO_ADDDYNAMICTESTANDDEFER_OFFSET UNITYSDK_OFFSET(0x96BC660)
#define METAEXPANDO_GETCLASSENSUREINDEX_OFFSET UNITYSDK_OFFSET(0x96BD0D0)
#define METAEXPANDO_GETLIMITEDSELF_OFFSET UNITYSDK_OFFSET(0x96BC500)
#define METAEXPANDO_GETRESTRICTIONS_OFFSET UNITYSDK_OFFSET(0x96BD730)
#define METAEXPANDO_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x96BC4A0)

	inline static constexpr unsigned int MetaExpando_TypeDefinitionIndex = 33558;

	class MetaExpando : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Linq::Expressions::Expression* arg, ::System::Dynamic::ExpandoObject* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Expression*, ::System::Dynamic::ExpandoObject*, ::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindGetOrInvokeMember(::System::Dynamic::DynamicMetaObjectBinder* arg, ::System::String* str, ::System::Boolean arg, ::System::Dynamic::DynamicMetaObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObjectBinder*, ::System::String*, ::System::Boolean, ::System::Dynamic::DynamicMetaObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_BINDGETORINVOKEMEMBER_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindGetMember(::System::Dynamic::GetMemberBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::GetMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_BINDGETMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindInvokeMember(::System::Dynamic::InvokeMemberBinder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::InvokeMemberBinder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_BINDINVOKEMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindSetMember(::System::Dynamic::SetMemberBinder* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::SetMemberBinder*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_BINDSETMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* BindDeleteMember(::System::Dynamic::DeleteMemberBinder* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DeleteMemberBinder*, ::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_BINDDELETEMEMBER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDynamicMemberNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_GETDYNAMICMEMBERNAMES_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* AddDynamicTestAndDefer(::System::Dynamic::DynamicMetaObjectBinder* arg, ::System::Dynamic::ExpandoClass* arg, ::System::Dynamic::ExpandoClass* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObjectBinder*, ::System::Dynamic::ExpandoClass*, ::System::Dynamic::ExpandoClass*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_ADDDYNAMICTESTANDDEFER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Dynamic::ExpandoClass* GetClassEnsureIndex(::System::String* str, ::System::Boolean arg, ::System::Dynamic::ExpandoObject* arg, ::System::Dynamic::ExpandoClass&* arg, int32_t&* arg)
		{
			return (return (::System::Dynamic::ExpandoClass*(*)(::System::String*, ::System::Boolean, ::System::Dynamic::ExpandoObject*, ::System::Dynamic::ExpandoClass&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_GETCLASSENSUREINDEX_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Linq::Expressions::Expression* GetLimitedSelf()
		{
			return (return (::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_GETLIMITEDSELF_OFFSET))(nullptr);
		}

		::System::Dynamic::BindingRestrictions* GetRestrictions()
		{
			return (return (::System::Dynamic::BindingRestrictions*(*)(::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_GETRESTRICTIONS_OFFSET))(nullptr);
		}

		::System::Dynamic::ExpandoObject* get_Value()
		{
			return (return (::System::Dynamic::ExpandoObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + METAEXPANDO_GET_VALUE_OFFSET))(nullptr);
		}

	};

