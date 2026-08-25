#pragma once
#include "../unitysdk.h"

#define NPA_NXPPOLICY_GETPOLICYTYPE_OFFSET UNITYSDK_OFFSET(0x9BBAA90)
#define NPA_NXPPOLICY_GETTITLE_OFFSET UNITYSDK_OFFSET(0x9BBAAA0)
#define NPA_NXPPOLICY_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x9BBAAB0)
#define NPA_NXPPOLICY_GETTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9BBAAC0)
#define NPA_NXPPOLICY_GETAGREETOAST_OFFSET UNITYSDK_OFFSET(0x9BBAB40)
#define NPA_NXPPOLICY_GETDISAGREETOAST_OFFSET UNITYSDK_OFFSET(0x9BBAB50)
#define NPA_NXPPOLICY_GETISAGREETOAST_OFFSET UNITYSDK_OFFSET(0x9BBAB60)
#define NPA_NXPPOLICY_GETISDISAGREETOAST_OFFSET UNITYSDK_OFFSET(0x9BBAB70)
#define NPA_NXPPOLICY_SETPOLICYTYPE_OFFSET UNITYSDK_OFFSET(0x9BBAB80)
#define NPA_NXPPOLICY_SETTITLE_OFFSET UNITYSDK_OFFSET(0x9BBAB90)
#define NPA_NXPPOLICY_SETSTATUS_OFFSET UNITYSDK_OFFSET(0x9BBABA0)
#define NPA_NXPPOLICY_SETTERMSLIST_OFFSET UNITYSDK_OFFSET(0x9BBABB0)
#define NPA_NXPPOLICY_SETAGREETOAST_OFFSET UNITYSDK_OFFSET(0x9BBABC0)
#define NPA_NXPPOLICY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBABD0)

namespace NPA
{
	inline static constexpr unsigned int NXPPolicy_TypeDefinitionIndex = 25491;

	class NXPPolicy : public Il2CppObject
	{
	public:
		::System::Int32 type; // 0x10
		::System::String* title; // 0x18
		::System::Int32 status; // 0x20
		Il2CppObject* termsList; // 0x28
		::System::String* agreeToast; // 0x30
		::System::String* disagreeToast; // 0x38
		::System::Int32 isAgreeToast; // 0x40
		::System::Int32 isDisagreeToast; // 0x44

		::System::Int32 GetPolicyType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_GETPOLICYTYPE_OFFSET))(nullptr);
		}

		::System::String* GetTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_GETTITLE_OFFSET))(nullptr);
		}

		::System::Int32 GetStatus()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_GETSTATUS_OFFSET))(nullptr);
		}

		Il2CppObject* GetTermsList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_GETTERMSLIST_OFFSET))(nullptr);
		}

		::System::String* GetAgreeToast()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_GETAGREETOAST_OFFSET))(nullptr);
		}

		::System::String* GetDisagreeToast()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_GETDISAGREETOAST_OFFSET))(nullptr);
		}

		::System::Boolean GetIsAgreeToast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_GETISAGREETOAST_OFFSET))(nullptr);
		}

		::System::Boolean GetIsDisagreeToast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_GETISDISAGREETOAST_OFFSET))(nullptr);
		}

		::System::Void SetPolicyType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_SETPOLICYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_SETTITLE_OFFSET))(str, nullptr);
		}

		::System::Void SetStatus(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_SETSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void SetTermsList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_SETTERMSLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetAgreeToast(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_SETAGREETOAST_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPOLICY_.CTOR_OFFSET))(nullptr);
		}

	};
}

