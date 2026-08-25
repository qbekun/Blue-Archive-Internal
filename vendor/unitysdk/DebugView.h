#pragma once
#include "unitysdk.h"

#define DEBUGVIEW_GETINSTRUCTIONVIEWS_OFFSET UNITYSDK_OFFSET(0x967B5A0)

	inline static constexpr unsigned int DebugView_TypeDefinitionIndex = 33275;

	class DebugView : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GetInstructionViews(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGVIEW_GETINSTRUCTIONVIEWS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

