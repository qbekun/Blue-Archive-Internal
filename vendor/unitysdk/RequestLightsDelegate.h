#pragma once
#include "unitysdk.h"

#define REQUESTLIGHTSDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA26FDE0)
#define REQUESTLIGHTSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA26FEB0)

	inline static constexpr unsigned int RequestLightsDelegate_TypeDefinitionIndex = 31640;

	class RequestLightsDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REQUESTLIGHTSDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + REQUESTLIGHTSDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

