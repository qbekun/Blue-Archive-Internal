#pragma once
#include "unitysdk.h"

#define BINDERWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x94A7670)
#define BINDERWRAPPER_CREATESHARPARGUMENTINFOARRAY_OFFSET UNITYSDK_OFFSET(0x94A7880)
#define BINDERWRAPPER_CREATEMEMBERCALLS_OFFSET UNITYSDK_OFFSET(0x94A7C10)
#define BINDERWRAPPER_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x94A8180)
#define BINDERWRAPPER_SETMEMBER_OFFSET UNITYSDK_OFFSET(0x94A83A0)

	inline static constexpr unsigned int BinderWrapper_TypeDefinitionIndex = 31846;

	class BinderWrapper : public Il2CppObject
	{
	public:
		::System::String* CSharpAssemblyName; // 0x0
		::System::String* BinderTypeName; // 0x0
		::System::String* CSharpArgumentInfoTypeName; // 0x0
		::System::String* CSharpArgumentInfoFlagsTypeName; // 0x0
		::System::String* CSharpBinderFlagsTypeName; // 0x0
		::System::Object* _getCSharpArgumentInfoArray; // 0x0
		::System::Object* _setCSharpArgumentInfoArray; // 0x8
		Il2CppObject* _getMemberCall; // 0x10
		Il2CppObject* _setMemberCall; // 0x18
		::System::Boolean _init; // 0x20

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDERWRAPPER_INIT_OFFSET))(nullptr);
		}

		::System::Object* CreateSharpArgumentInfoArray(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BINDERWRAPPER_CREATESHARPARGUMENTINFOARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void CreateMemberCalls()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDERWRAPPER_CREATEMEMBERCALLS_OFFSET))(nullptr);
		}

		::System::Runtime::CompilerServices::CallSiteBinder* GetMember(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Runtime::CompilerServices::CallSiteBinder*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BINDERWRAPPER_GETMEMBER_OFFSET))(str, arg, nullptr);
		}

		::System::Runtime::CompilerServices::CallSiteBinder* SetMember(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Runtime::CompilerServices::CallSiteBinder*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + BINDERWRAPPER_SETMEMBER_OFFSET))(str, arg, nullptr);
		}

	};

