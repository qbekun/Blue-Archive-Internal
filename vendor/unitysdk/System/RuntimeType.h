#pragma once
#include "../unitysdk.h"

#define SYSTEM_RUNTIMETYPE_GETTYPE_OFFSET UNITYSDK_OFFSET(0x93A3100)
#define SYSTEM_RUNTIMETYPE_THROWIFTYPENEVERVALIDGENERICARGUMENT_OFFSET UNITYSDK_OFFSET(0x93A3180)
#define SYSTEM_RUNTIMETYPE_SANITYCHECKGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x93A32E0)
#define SYSTEM_RUNTIMETYPE_SPLITNAME_OFFSET UNITYSDK_OFFSET(0x93A3500)
#define SYSTEM_RUNTIMETYPE_FILTERPRECALCULATE_OFFSET UNITYSDK_OFFSET(0x93A3600)
#define SYSTEM_RUNTIMETYPE_FILTERHELPER_OFFSET UNITYSDK_OFFSET(0x93A3630)
#define SYSTEM_RUNTIMETYPE_FILTERHELPER_OFFSET UNITYSDK_OFFSET(0x93A3750)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYPREFIXLOOKUP_OFFSET UNITYSDK_OFFSET(0x93A37C0)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYBASE_OFFSET UNITYSDK_OFFSET(0x93A3850)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYTYPE_OFFSET UNITYSDK_OFFSET(0x93A3A90)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODINFO_OFFSET UNITYSDK_OFFSET(0x93A3B90)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYCONSTRUCTORINFO_OFFSET UNITYSDK_OFFSET(0x93A3E80)
#define SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODBASE_OFFSET UNITYSDK_OFFSET(0x93A3C10)
#define SYSTEM_RUNTIMETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93A3F00)
#define SYSTEM_RUNTIMETYPE_GETMETHODCANDIDATES_OFFSET UNITYSDK_OFFSET(0x93A3F50)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORCANDIDATES_OFFSET UNITYSDK_OFFSET(0x93A45B0)
#define SYSTEM_RUNTIMETYPE_GETPROPERTYCANDIDATES_OFFSET UNITYSDK_OFFSET(0x93A4C30)
#define SYSTEM_RUNTIMETYPE_GETEVENTCANDIDATES_OFFSET UNITYSDK_OFFSET(0x93A5350)
#define SYSTEM_RUNTIMETYPE_GETFIELDCANDIDATES_OFFSET UNITYSDK_OFFSET(0x93A58E0)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPECANDIDATES_OFFSET UNITYSDK_OFFSET(0x93A5EB0)
#define SYSTEM_RUNTIMETYPE_GETMETHODS_OFFSET UNITYSDK_OFFSET(0x93A64C0)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_OFFSET UNITYSDK_OFFSET(0x93A6550)
#define SYSTEM_RUNTIMETYPE_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x93A65D0)
#define SYSTEM_RUNTIMETYPE_GETEVENTS_OFFSET UNITYSDK_OFFSET(0x93A6650)
#define SYSTEM_RUNTIMETYPE_GETFIELDS_OFFSET UNITYSDK_OFFSET(0x93A66C0)
#define SYSTEM_RUNTIMETYPE_GETMEMBERS_OFFSET UNITYSDK_OFFSET(0x93A6730)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORIMPL_OFFSET UNITYSDK_OFFSET(0x93A6A50)
#define SYSTEM_RUNTIMETYPE_GETPROPERTYIMPL_OFFSET UNITYSDK_OFFSET(0x93A6C80)
#define SYSTEM_RUNTIMETYPE_GETEVENT_OFFSET UNITYSDK_OFFSET(0x93A6F30)
#define SYSTEM_RUNTIMETYPE_GETFIELD_OFFSET UNITYSDK_OFFSET(0x93A71B0)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x93A75A0)
#define SYSTEM_RUNTIMETYPE_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x93A7880)
#define SYSTEM_RUNTIMETYPE_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x93A7D20)
#define SYSTEM_RUNTIMETYPE_GETRUNTIMEMODULE_OFFSET UNITYSDK_OFFSET(0x93A7D30)
#define SYSTEM_RUNTIMETYPE_GET_ASSEMBLY_OFFSET UNITYSDK_OFFSET(0x93A7D40)
#define SYSTEM_RUNTIMETYPE_GETRUNTIMEASSEMBLY_OFFSET UNITYSDK_OFFSET(0x93A7D50)
#define SYSTEM_RUNTIMETYPE_GET_TYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x93A7D60)
#define SYSTEM_RUNTIMETYPE_ISINSTANCEOFTYPE_OFFSET UNITYSDK_OFFSET(0x93A7D90)
#define SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_OFFSET UNITYSDK_OFFSET(0x93A7DA0)
#define SYSTEM_RUNTIMETYPE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x93A7E70)
#define SYSTEM_RUNTIMETYPE_GET_BASETYPE_OFFSET UNITYSDK_OFFSET(0x93A7F10)
#define SYSTEM_RUNTIMETYPE_GETBASETYPE_OFFSET UNITYSDK_OFFSET(0x93A7F20)
#define SYSTEM_RUNTIMETYPE_GET_UNDERLYINGSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x93A8120)
#define SYSTEM_RUNTIMETYPE_GETATTRIBUTEFLAGSIMPL_OFFSET UNITYSDK_OFFSET(0x93A8130)
#define SYSTEM_RUNTIMETYPE_ISCONTEXTFULIMPL_OFFSET UNITYSDK_OFFSET(0x93A8140)
#define SYSTEM_RUNTIMETYPE_ISBYREFIMPL_OFFSET UNITYSDK_OFFSET(0x93A8150)
#define SYSTEM_RUNTIMETYPE_ISPRIMITIVEIMPL_OFFSET UNITYSDK_OFFSET(0x93A8160)
#define SYSTEM_RUNTIMETYPE_ISPOINTERIMPL_OFFSET UNITYSDK_OFFSET(0x93A8170)
#define SYSTEM_RUNTIMETYPE_ISCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x93A8180)
#define SYSTEM_RUNTIMETYPE_ISVALUETYPEIMPL_OFFSET UNITYSDK_OFFSET(0x93A8190)
#define SYSTEM_RUNTIMETYPE_GET_ISENUM_OFFSET UNITYSDK_OFFSET(0x93A8290)
#define SYSTEM_RUNTIMETYPE_HASELEMENTTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x93A8300)
#define SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x93A8310)
#define SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x93A8410)
#define SYSTEM_RUNTIMETYPE_ISARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x93A8420)
#define SYSTEM_RUNTIMETYPE_GETARRAYRANK_OFFSET UNITYSDK_OFFSET(0x93A8430)
#define SYSTEM_RUNTIMETYPE_GETELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x93A84C0)
#define SYSTEM_RUNTIMETYPE_GETENUMNAMES_OFFSET UNITYSDK_OFFSET(0x93A84D0)
#define SYSTEM_RUNTIMETYPE_GETENUMVALUES_OFFSET UNITYSDK_OFFSET(0x93A8640)
#define SYSTEM_RUNTIMETYPE_GETENUMUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x93A8840)
#define SYSTEM_RUNTIMETYPE_ISENUMDEFINED_OFFSET UNITYSDK_OFFSET(0x93A8910)
#define SYSTEM_RUNTIMETYPE_GETENUMNAME_OFFSET UNITYSDK_OFFSET(0x93A8F30)
#define SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x93A91D0)
#define SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x93A9250)
#define SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x93A9310)
#define SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x93A9960)
#define SYSTEM_RUNTIMETYPE_GET_ISGENERICPARAMETER_OFFSET UNITYSDK_OFFSET(0x93A9970)
#define SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERPOSITION_OFFSET UNITYSDK_OFFSET(0x93A9980)
#define SYSTEM_RUNTIMETYPE_GETGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x93A9A20)
#define SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x93A9AB0)
#define SYSTEM_RUNTIMETYPE_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x93A9AC0)
#define SYSTEM_RUNTIMETYPE_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x93A9B00)
#define SYSTEM_RUNTIMETYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93AB0F0)
#define SYSTEM_RUNTIMETYPE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x93917E0)
#define SYSTEM_RUNTIMETYPE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x93945C0)
#define SYSTEM_RUNTIMETYPE_CLONE_OFFSET UNITYSDK_OFFSET(0x93AB100)
#define SYSTEM_RUNTIMETYPE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93AB110)
#define SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x93AB190)
#define SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x93AB220)
#define SYSTEM_RUNTIMETYPE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x93AB3C0)
#define SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x93AB560)
#define SYSTEM_RUNTIMETYPE_FORMATTYPENAME_OFFSET UNITYSDK_OFFSET(0x93AB570)
#define SYSTEM_RUNTIMETYPE_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x93AB760)
#define SYSTEM_RUNTIMETYPE_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x93AB7A0)
#define SYSTEM_RUNTIMETYPE_GET_METADATATOKEN_OFFSET UNITYSDK_OFFSET(0x93AB7C0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCECHECKTHIS_OFFSET UNITYSDK_OFFSET(0x93AB7D0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEIMPL_OFFSET UNITYSDK_OFFSET(0x93917F0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEDEFAULTCTOR_OFFSET UNITYSDK_OFFSET(0x93923A0)
#define SYSTEM_RUNTIMETYPE_GETDEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x93ABA20)
#define SYSTEM_RUNTIMETYPE_GETDEFAULTMEMBERNAME_OFFSET UNITYSDK_OFFSET(0x93AB020)
#define SYSTEM_RUNTIMETYPE_GETSERIALIZATIONCTOR_OFFSET UNITYSDK_OFFSET(0x93ABBD0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCESLOW_OFFSET UNITYSDK_OFFSET(0x93AB9F0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEMONO_OFFSET UNITYSDK_OFFSET(0x93ABE00)
#define SYSTEM_RUNTIMETYPE_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x93AC0E0)
#define SYSTEM_RUNTIMETYPE_TRYCONVERTTOTYPE_OFFSET UNITYSDK_OFFSET(0x93AC240)
#define SYSTEM_RUNTIMETYPE_ISCONVERTIBLETOPRIMITIVETYPE_OFFSET UNITYSDK_OFFSET(0x93AC4C0)
#define SYSTEM_RUNTIMETYPE_GETCACHEDNAME_OFFSET UNITYSDK_OFFSET(0x93AB6F0)
#define SYSTEM_RUNTIMETYPE_MAKE_ARRAY_TYPE_OFFSET UNITYSDK_OFFSET(0x93ACBA0)
#define SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x93ACBB0)
#define SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x93ACBC0)
#define SYSTEM_RUNTIMETYPE_MAKE_BYREF_TYPE_OFFSET UNITYSDK_OFFSET(0x93ACC20)
#define SYSTEM_RUNTIMETYPE_MAKEBYREFTYPE_OFFSET UNITYSDK_OFFSET(0x93ACC30)
#define SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x93ACCB0)
#define SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_OFFSET UNITYSDK_OFFSET(0x93ACCC0)
#define SYSTEM_RUNTIMETYPE_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x93ACDA0)
#define SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x93ACEA0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEFORANOTHERGENERICPARAMETER_OFFSET UNITYSDK_OFFSET(0x93ACFB0)
#define SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x93A9950)
#define SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_NATIVE_OFFSET UNITYSDK_OFFSET(0x93AD0E0)
#define SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_OFFSET UNITYSDK_OFFSET(0x93A4210)
#define SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_NATIVE_OFFSET UNITYSDK_OFFSET(0x93AD0F0)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_NATIVE_OFFSET UNITYSDK_OFFSET(0x93AD100)
#define SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93A49A0)
#define SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_OFFSET UNITYSDK_OFFSET(0x93A4FB0)
#define SYSTEM_RUNTIMETYPE_GETGUID_OFFSET UNITYSDK_OFFSET(0x93AD110)
#define SYSTEM_RUNTIMETYPE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x93AD120)
#define SYSTEM_RUNTIMETYPE_GETTYPEFROMCLSIDIMPL_OFFSET UNITYSDK_OFFSET(0x93AD1B0)
#define SYSTEM_RUNTIMETYPE_GETTYPECODEIMPL_OFFSET UNITYSDK_OFFSET(0x93AD210)
#define SYSTEM_RUNTIMETYPE_GETTYPECODEIMPLINTERNAL_OFFSET UNITYSDK_OFFSET(0x93AD260)
#define SYSTEM_RUNTIMETYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93AD270)
#define SYSTEM_RUNTIMETYPE_ISGENERICCOMOBJECTIMPL_OFFSET UNITYSDK_OFFSET(0x93AB9E0)
#define SYSTEM_RUNTIMETYPE_CREATEINSTANCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x93AC0D0)
#define SYSTEM_RUNTIMETYPE_GET_DECLARINGMETHOD_OFFSET UNITYSDK_OFFSET(0x93AD290)
#define SYSTEM_RUNTIMETYPE_GETFULLNAME_OFFSET UNITYSDK_OFFSET(0x93AD280)
#define SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x93A9240)
#define SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x93A83D0)
#define SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERPOSITION_OFFSET UNITYSDK_OFFSET(0x93A9A10)
#define SYSTEM_RUNTIMETYPE_GETEVENTS_NATIVE_OFFSET UNITYSDK_OFFSET(0x93AD2A0)
#define SYSTEM_RUNTIMETYPE_GETFIELDS_NATIVE_OFFSET UNITYSDK_OFFSET(0x93AD2B0)
#define SYSTEM_RUNTIMETYPE_GETFIELDS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93A5B10)
#define SYSTEM_RUNTIMETYPE_GETEVENTS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93A5580)
#define SYSTEM_RUNTIMETYPE_GETINTERFACES_OFFSET UNITYSDK_OFFSET(0x93AD2C0)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_NATIVE_OFFSET UNITYSDK_OFFSET(0x93AD2D0)
#define SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x93A6070)
#define SYSTEM_RUNTIMETYPE_GET_ASSEMBLYQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x93AD2E0)
#define SYSTEM_RUNTIMETYPE_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x93AD2F0)
#define SYSTEM_RUNTIMETYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x93AD300)
#define SYSTEM_RUNTIMETYPE_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x93AD310)
#define SYSTEM_RUNTIMETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93AD320)
#define SYSTEM_RUNTIMETYPE_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x93AD3F0)
#define SYSTEM_RUNTIMETYPE_HASSAMEMETADATADEFINITIONAS_OFFSET UNITYSDK_OFFSET(0x93AD4E0)
#define SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x93AD530)
#define SYSTEM_RUNTIMETYPE_ISSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x93AD590)
#define SYSTEM_RUNTIMETYPE_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x93AD690)
#define SYSTEM_RUNTIMETYPE_GETMETHODIMPLCOMMON_OFFSET UNITYSDK_OFFSET(0x93AD6D0)
#define SYSTEM_RUNTIMETYPE_GETMETHODCANDIDATES_OFFSET UNITYSDK_OFFSET(0x93AD9A0)
#define SYSTEM_RUNTIMETYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93ADC40)

namespace System
{
	inline static constexpr unsigned int RuntimeType_TypeDefinitionIndex = 23939;

	class RuntimeType : public Il2CppObject
	{
	public:
		::System::RuntimeType* ValueType; // 0x0
		::System::RuntimeType* EnumType; // 0x8
		::System::RuntimeType* ObjectType; // 0x10
		::System::RuntimeType* StringType; // 0x18
		::System::RuntimeType* DelegateType; // 0x20
		::Il2CppArray<::System::Object*>* s_SICtorParamTypes; // 0x28
		Il2CppObject* MakeTypeBuilderInstantiation; // 0x30
		::System::Reflection::BindingFlags* MemberBindingMask; // 0x0
		::System::Reflection::BindingFlags* InvocationMask; // 0x0
		::System::Reflection::BindingFlags* BinderNonCreateInstance; // 0x0
		::System::Reflection::BindingFlags* BinderGetSetProperty; // 0x0
		::System::Reflection::BindingFlags* BinderSetInvokeProperty; // 0x0
		::System::Reflection::BindingFlags* BinderGetSetField; // 0x0
		::System::Reflection::BindingFlags* BinderSetInvokeField; // 0x0
		::System::Reflection::BindingFlags* BinderNonFieldGetSet; // 0x0
		::System::Reflection::BindingFlags* ClassicBindingMask; // 0x0
		::System::RuntimeType* s_typedRef; // 0x38
		::System::MonoTypeInfo* type_info; // 0x18
		::System::Object* GenericCache; // 0x20
		::System::Reflection::RuntimeConstructorInfo* m_serializationCtor; // 0x28
		::System::Int32 GenericParameterCountAny; // 0x0

		::System::RuntimeType* GetType(::System::String* str, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::RuntimeType*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPE_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		::System::Void ThrowIfTypeNeverValidGenericArgument(::System::RuntimeType* arg)
		{
			((::System::Void(*)(::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_THROWIFTYPENEVERVALIDGENERICARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::Void SanityCheckGenericArguments(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_SANITYCHECKGENERICARGUMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SplitName(::System::String* str, ::System::String&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_SPLITNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Reflection::BindingFlags* FilterPreCalculate(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Reflection::BindingFlags*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERPRECALCULATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FilterHelper(::System::Reflection::BindingFlags* arg, ::System::String&* arg, ::System::Boolean arg, bool&* arg, bool&* arg, MemberListType&* arg)
		{
			((::System::Void(*)(::System::Reflection::BindingFlags*, ::System::String&*, ::System::Boolean, bool&*, bool&*, MemberListType&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERHELPER_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FilterHelper(::System::Reflection::BindingFlags* arg, ::System::String&* arg, bool&* arg, MemberListType&* arg)
		{
			((::System::Void(*)(::System::Reflection::BindingFlags*, ::System::String&*, bool&*, MemberListType&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERHELPER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FilterApplyPrefixLookup(::System::Reflection::MemberInfo* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYPREFIXLOOKUP_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean FilterApplyBase(::System::Reflection::MemberInfo* arg, ::System::Reflection::BindingFlags* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Reflection::BindingFlags*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYBASE_OFFSET))(arg, arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Boolean FilterApplyType(::System::Type* arg, ::System::Reflection::BindingFlags* arg, ::System::String* str, ::System::Boolean arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Reflection::BindingFlags*, ::System::String*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYTYPE_OFFSET))(arg, arg, str, arg, str, nullptr);
		}

		::System::Boolean FilterApplyMethodInfo(::System::Reflection::RuntimeMethodInfo* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::RuntimeMethodInfo*, ::System::Reflection::BindingFlags*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FilterApplyConstructorInfo(::System::Reflection::RuntimeConstructorInfo* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::RuntimeConstructorInfo*, ::System::Reflection::BindingFlags*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYCONSTRUCTORINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FilterApplyMethodBase(::System::Reflection::MethodBase* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::BindingFlags*, ::System::Reflection::BindingFlags*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FILTERAPPLYMETHODBASE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetMethodCandidates(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODCANDIDATES_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetConstructorCandidates(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORCANDIDATES_OFFSET))(str, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetPropertyCandidates(::System::String* str, ::System::Reflection::BindingFlags* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTYCANDIDATES_OFFSET))(str, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetEventCandidates(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTCANDIDATES_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* GetFieldCandidates(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDCANDIDATES_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* GetNestedTypeCandidates(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPECANDIDATES_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMethods(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetConstructors(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetProperties(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTIES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEvents(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFields(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMembers(::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORIMPL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::PropertyInfo* GetPropertyImpl(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Type* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Type*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTYIMPL_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::EventInfo* GetEvent(::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Reflection::EventInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENT_OFFSET))(str, arg, nullptr);
		}

		::System::Reflection::FieldInfo* GetField(::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELD_OFFSET))(str, arg, nullptr);
		}

		::System::Type* GetNestedType(::System::String* str, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Type*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPE_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMember(::System::String* str, ::System::Reflection::MemberTypes* arg, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Reflection::MemberTypes*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMEMBER_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Reflection::Module* get_Module()
		{
			return (return (::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_MODULE_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeModule* GetRuntimeModule()
		{
			return (return (::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETRUNTIMEMODULE_OFFSET))(nullptr);
		}

		::System::Reflection::Assembly* get_Assembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ASSEMBLY_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeAssembly* GetRuntimeAssembly()
		{
			return (return (::System::Reflection::RuntimeAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETRUNTIMEASSEMBLY_OFFSET))(nullptr);
		}

		::System::RuntimeTypeHandle* get_TypeHandle()
		{
			return (return (::System::RuntimeTypeHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_TYPEHANDLE_OFFSET))(nullptr);
		}

		::System::Boolean IsInstanceOfType(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISINSTANCEOFTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAssignableFrom(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISASSIGNABLEFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEquivalentTo(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISEQUIVALENTTO_OFFSET))(arg, nullptr);
		}

		::System::Type* get_BaseType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_BASETYPE_OFFSET))(nullptr);
		}

		::System::RuntimeType* GetBaseType()
		{
			return (return (::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETBASETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_UnderlyingSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_UNDERLYINGSYSTEMTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::TypeAttributes* GetAttributeFlagsImpl()
		{
			return (return (::System::Reflection::TypeAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETATTRIBUTEFLAGSIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsContextfulImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISCONTEXTFULIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsByRefImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISBYREFIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsPrimitiveImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISPRIMITIVEIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsPointerImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISPOINTERIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsCOMObjectImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISCOMOBJECTIMPL_OFFSET))(nullptr);
		}

		::System::Boolean IsValueTypeImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISVALUETYPEIMPL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEnum()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISENUM_OFFSET))(nullptr);
		}

		::System::Boolean HasElementTypeImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_HASELEMENTTYPEIMPL_OFFSET))(nullptr);
		}

		::System::Reflection::GenericParameterAttributes* get_GenericParameterAttributes()
		{
			return (return (::System::Reflection::GenericParameterAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSzArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_OFFSET))(nullptr);
		}

		::System::Boolean IsArrayImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISARRAYIMPL_OFFSET))(nullptr);
		}

		::System::Int32 GetArrayRank()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETARRAYRANK_OFFSET))(nullptr);
		}

		::System::Type* GetElementType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETELEMENTTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEnumNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETENUMNAMES_OFFSET))(nullptr);
		}

		::System::Array* GetEnumValues()
		{
			return (return (::System::Array*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETENUMVALUES_OFFSET))(nullptr);
		}

		::System::Type* GetEnumUnderlyingType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETENUMUNDERLYINGTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsEnumDefined(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISENUMDEFINED_OFFSET))(arg, nullptr);
		}

		::System::String* GetEnumName(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETENUMNAME_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGenericArgumentsInternal()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGenericArguments()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTS_OFFSET))(nullptr);
		}

		::System::Type* MakeGenericType(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsGenericTypeDefinition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPEDEFINITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGenericParameter()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISGENERICPARAMETER_OFFSET))(nullptr);
		}

		::System::Int32 get_GenericParameterPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_GENERICPARAMETERPOSITION_OFFSET))(nullptr);
		}

		::System::Type* GetGenericTypeDefinition()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICTYPEDEFINITION_OFFSET))(nullptr);
		}

		::System::Boolean get_IsGenericType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISGENERICTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsConstructedGenericType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET))(nullptr);
		}

		::System::Object* InvokeMember(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_INVOKEMEMBER_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::System::RuntimeType* arg, ::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::RuntimeType* arg, ::System::RuntimeType* arg)
		{
			return (return (::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CLONE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTES_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDefined(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISDEFINED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetCustomAttributesData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCUSTOMATTRIBUTESDATA_OFFSET))(nullptr);
		}

		::System::String* FormatTypeName(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_FORMATTYPENAME_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MemberTypes* get_MemberType()
		{
			return (return (::System::Reflection::MemberTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_MEMBERTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ReflectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_REFLECTEDTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_MetadataToken()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_METADATATOKEN_OFFSET))(nullptr);
		}

		::System::Void CreateInstanceCheckThis()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCECHECKTHIS_OFFSET))(nullptr);
		}

		::System::Object* CreateInstanceImpl(::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CultureInfo* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Object*(*)(::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::Object*>*, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEIMPL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* CreateInstanceDefaultCtor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEDEFAULTCTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::RuntimeConstructorInfo* GetDefaultConstructor()
		{
			return (return (::System::Reflection::RuntimeConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETDEFAULTCONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::String* GetDefaultMemberName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETDEFAULTMEMBERNAME_OFFSET))(nullptr);
		}

		::System::Reflection::RuntimeConstructorInfo* GetSerializationCtor()
		{
			return (return (::System::Reflection::RuntimeConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETSERIALIZATIONCTOR_OFFSET))(nullptr);
		}

		::System::Object* CreateInstanceSlow(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCESLOW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* CreateInstanceMono(::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEMONO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CheckValue(::System::Object* arg, ::System::Reflection::Binder* arg, ::System::Globalization::CultureInfo* arg, ::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CHECKVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* TryConvertToType(::System::Object* arg, bool&* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_TRYCONVERTTOTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* IsConvertibleToPrimitiveType(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISCONVERTIBLETOPRIMITIVETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetCachedName(::System::TypeNameKind* arg)
		{
			return (return (::System::String*(*)(::System::TypeNameKind*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCACHEDNAME_OFFSET))(arg, nullptr);
		}

		::System::Type* make_array_type(::System::Int32 arg)
		{
			return (return (::System::Type*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKE_ARRAY_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* MakeArrayType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_OFFSET))(nullptr);
		}

		::System::Type* MakeArrayType(::System::Int32 arg)
		{
			return (return (::System::Type*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEARRAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* make_byref_type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKE_BYREF_TYPE_OFFSET))(nullptr);
		}

		::System::Type* MakeByRefType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEBYREFTYPE_OFFSET))(nullptr);
		}

		::System::Type* MakePointerType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* MakePointerType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEPOINTERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ContainsGenericParameters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_CONTAINSGENERICPARAMETERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGenericParameterConstraints()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Object* CreateInstanceForAnotherGenericParameter(::System::Type* arg, ::System::RuntimeType* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEFORANOTHERGENERICPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* MakeGenericType(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_MAKEGENERICTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetMethodsByName_native(::System::Int32 arg, ::System::Reflection::BindingFlags* arg, MemberListType* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Reflection::BindingFlags*, MemberListType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_NATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMethodsByName(::System::String* str, ::System::Reflection::BindingFlags* arg, MemberListType* arg, ::System::RuntimeType* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Reflection::BindingFlags*, MemberListType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODSBYNAME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int32 GetPropertiesByName_native(::System::Int32 arg, ::System::Reflection::BindingFlags* arg, MemberListType* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Reflection::BindingFlags*, MemberListType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_NATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetConstructors_native(::System::Reflection::BindingFlags* arg)
		{
			return (return (::System::Int32(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_NATIVE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetConstructors_internal(::System::Reflection::BindingFlags* arg, ::System::RuntimeType* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Reflection::BindingFlags*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETCONSTRUCTORS_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPropertiesByName(::System::String* str, ::System::Reflection::BindingFlags* arg, MemberListType* arg, ::System::RuntimeType* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Reflection::BindingFlags*, MemberListType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETPROPERTIESBYNAME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void GetGUID(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGUID_OFFSET))(arg, arg, nullptr);
		}

		::System::Guid* get_GUID()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_GUID_OFFSET))(nullptr);
		}

		::System::Type* GetTypeFromCLSIDImpl(::System::Guid* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Type*(*)(::System::Guid*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPEFROMCLSIDIMPL_OFFSET))(arg, str, arg, nullptr);
		}

		::System::TypeCode* GetTypeCodeImpl()
		{
			return (return (::System::TypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPECODEIMPL_OFFSET))(nullptr);
		}

		::System::TypeCode* GetTypeCodeImplInternal(::System::Type* arg)
		{
			return (return (::System::TypeCode*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETTYPECODEIMPLINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean IsGenericCOMObjectImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISGENERICCOMOBJECTIMPL_OFFSET))(nullptr);
		}

		::System::Object* CreateInstanceInternal(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_CREATEINSTANCEINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodBase* get_DeclaringMethod()
		{
			return (return (::System::Reflection::MethodBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_DECLARINGMETHOD_OFFSET))(nullptr);
		}

		::System::String* getFullName(::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFULLNAME_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetGenericArgumentsInternal(::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICARGUMENTSINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Reflection::GenericParameterAttributes* GetGenericParameterAttributes()
		{
			return (return (::System::Reflection::GenericParameterAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Int32 GetGenericParameterPosition()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETGENERICPARAMETERPOSITION_OFFSET))(nullptr);
		}

		::System::Int32 GetEvents_native(::System::Int32 arg, MemberListType* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, MemberListType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTS_NATIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetFields_native(::System::Int32 arg, ::System::Reflection::BindingFlags* arg, MemberListType* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Reflection::BindingFlags*, MemberListType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDS_NATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetFields_internal(::System::String* str, ::System::Reflection::BindingFlags* arg, MemberListType* arg, ::System::RuntimeType* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Reflection::BindingFlags*, MemberListType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETFIELDS_INTERNAL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetEvents_internal(::System::String* str, ::System::Reflection::BindingFlags* arg, MemberListType* arg, ::System::RuntimeType* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Reflection::BindingFlags*, MemberListType*, ::System::RuntimeType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETEVENTS_INTERNAL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetInterfaces()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETINTERFACES_OFFSET))(nullptr);
		}

		::System::Int32 GetNestedTypes_native(::System::Int32 arg, ::System::Reflection::BindingFlags* arg, MemberListType* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Reflection::BindingFlags*, MemberListType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_NATIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetNestedTypes_internal(::System::String* str, ::System::Reflection::BindingFlags* arg, MemberListType* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Reflection::BindingFlags*, MemberListType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETNESTEDTYPES_INTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* get_AssemblyQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ASSEMBLYQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Namespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_NAMESPACE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* get_FullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_FULLNAME_OFFSET))(nullptr);
		}

		::System::Boolean HasSameMetadataDefinitionAs(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_HASSAMEMETADATADEFINITIONAS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSZArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GET_ISSZARRAY_OFFSET))(nullptr);
		}

		::System::Boolean IsSubclassOf(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_ISSUBCLASSOF_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetMethodImpl(::System::String* str, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODIMPL_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetMethodImplCommon(::System::String* str, ::System::Int32 arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::Binder* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Int32, ::System::Reflection::BindingFlags*, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODIMPLCOMMON_OFFSET))(str, arg, arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetMethodCandidates(::System::String* str, ::System::Int32 arg, ::System::Reflection::BindingFlags* arg, ::System::Reflection::CallingConventions* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Int32, ::System::Reflection::BindingFlags*, ::System::Reflection::CallingConventions*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_GETMETHODCANDIDATES_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIMETYPE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

