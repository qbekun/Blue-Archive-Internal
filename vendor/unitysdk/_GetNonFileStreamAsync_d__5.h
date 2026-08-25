#pragma once
#include "unitysdk.h"

#define <GETNONFILESTREAMASYNC>D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x99C47A0)
#define <GETNONFILESTREAMASYNC>D__5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x99C50A0)

	inline static constexpr unsigned int <GetNonFileStreamAsync>d__5_TypeDefinitionIndex = 27812;

	class <GetNonFileStreamAsync>d__5 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		Il2CppObject* __t__builder; // 0x18
		::System::Uri* uri; // 0x30
		::System::Net::ICredentials* credentials; // 0x38
		::System::Net::IWebProxy* proxy; // 0x40
		::System::Net::Cache::RequestCachePolicy* cachePolicy; // 0x48
		::System::Xml::XmlDownloadManager* __4__this; // 0x50
		::System::Net::WebRequest* _req_5__2; // 0x58
		Il2CppObject* __u__1; // 0x60

		::System::Void MoveNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETNONFILESTREAMASYNC>D__5_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* arg)
		{
			((::System::Void(*)(::System::Runtime::CompilerServices::IAsyncStateMachine*, ::PVOID))((::PBYTE)hIl2Cpp + <GETNONFILESTREAMASYNC>D__5_SETSTATEMACHINE_OFFSET))(arg, nullptr);
		}

	};

