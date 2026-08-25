#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_SETNOTMATCHED_OFFSET UNITYSDK_OFFSET(0x9631730)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_CREATEMATCHMAKER_OFFSET UNITYSDK_OFFSET(0x9631810)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETMATCH_OFFSET UNITYSDK_OFFSET(0x96318F0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_CLEARMATCH_OFFSET UNITYSDK_OFFSET(0x96319D0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_UPDATERULES_OFFSET UNITYSDK_OFFSET(0x9631AB0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETRULES_OFFSET UNITYSDK_OFFSET(0x9631B90)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETRULECACHE_OFFSET UNITYSDK_OFFSET(0x9631C70)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETCACHEDRULES_OFFSET UNITYSDK_OFFSET(0x9631D50)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_ADDRULE_OFFSET UNITYSDK_OFFSET(0x9631E30)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_MOVERULE_OFFSET UNITYSDK_OFFSET(0x9631F10)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_BIND_OFFSET UNITYSDK_OFFSET(0x9631FF0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_OP_EQUALITY_STRING_STRING_OFFSET UNITYSDK_OFFSET(0x96320D0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_MATH_POW_DOUBLE_DOUBLE_OFFSET UNITYSDK_OFFSET(0x9632280)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int CachedReflectionInfo_TypeDefinitionIndex = 32972;

	class CachedReflectionInfo : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* s_CallSiteOps_SetNotMatched; // 0x0
		::System::Reflection::MethodInfo* s_CallSiteOps_CreateMatchmaker; // 0x8
		::System::Reflection::MethodInfo* s_CallSiteOps_GetMatch; // 0x10
		::System::Reflection::MethodInfo* s_CallSiteOps_ClearMatch; // 0x18
		::System::Reflection::MethodInfo* s_CallSiteOps_UpdateRules; // 0x20
		::System::Reflection::MethodInfo* s_CallSiteOps_GetRules; // 0x28
		::System::Reflection::MethodInfo* s_CallSiteOps_GetRuleCache; // 0x30
		::System::Reflection::MethodInfo* s_CallSiteOps_GetCachedRules; // 0x38
		::System::Reflection::MethodInfo* s_CallSiteOps_AddRule; // 0x40
		::System::Reflection::MethodInfo* s_CallSiteOps_MoveRule; // 0x48
		::System::Reflection::MethodInfo* s_CallSiteOps_Bind; // 0x50
		::System::Reflection::MethodInfo* s_String_op_Equality_String_String; // 0x58
		::System::Reflection::MethodInfo* s_Math_Pow_Double_Double; // 0x60

		::System::Reflection::MethodInfo* get_CallSiteOps_SetNotMatched()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_SETNOTMATCHED_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_CreateMatchmaker()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_CREATEMATCHMAKER_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_GetMatch()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETMATCH_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_ClearMatch()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_CLEARMATCH_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_UpdateRules()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_UPDATERULES_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_GetRules()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETRULES_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_GetRuleCache()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETRULECACHE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_GetCachedRules()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_GETCACHEDRULES_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_AddRule()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_ADDRULE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_MoveRule()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_MOVERULE_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_CallSiteOps_Bind()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_CALLSITEOPS_BIND_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_String_op_Equality_String_String()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_OP_EQUALITY_STRING_STRING_OFFSET))(nullptr);
		}

		::System::Reflection::MethodInfo* get_Math_Pow_Double_Double()
		{
			return (return (::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_MATH_POW_DOUBLE_DOUBLE_OFFSET))(nullptr);
		}

	};
}

