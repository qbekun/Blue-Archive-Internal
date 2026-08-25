#pragma once
#include "unitysdk.h"

#define FROMASYNCTRIMPROMISE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define FROMASYNCTRIMPROMISE`1_COMPLETEFROMASYNCRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define FROMASYNCTRIMPROMISE`1_COMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FROMASYNCTRIMPROMISE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int FromAsyncTrimPromise`1_TypeDefinitionIndex = 24169;

	class FromAsyncTrimPromise`1 : public ReadFileJson
	{
	public:
		::System::AsyncCallback* s_completeFromAsyncResult; // 0x0
		Il2CppObject* m_thisRef; // 0x0
		Il2CppObject* m_endMethod; // 0x0

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FROMASYNCTRIMPROMISE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CompleteFromAsyncResult(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + FROMASYNCTRIMPROMISE`1_COMPLETEFROMASYNCRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void Complete(Il2CppObject* arg, Il2CppObject* arg, ::System::IAsyncResult* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::IAsyncResult*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FROMASYNCTRIMPROMISE`1_COMPLETE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FROMASYNCTRIMPROMISE`1_.CCTOR_OFFSET))(nullptr);
		}

	};

