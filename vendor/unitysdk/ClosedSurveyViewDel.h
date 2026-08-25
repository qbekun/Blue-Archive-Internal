#pragma once
#include "unitysdk.h"

#define CLOSEDSURVEYVIEWDEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C37C80)
#define CLOSEDSURVEYVIEWDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C37D50)
#define CLOSEDSURVEYVIEWDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C37D70)
#define CLOSEDSURVEYVIEWDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C37E00)

	inline static constexpr unsigned int ClosedSurveyViewDel_TypeDefinitionIndex = 26777;

	class ClosedSurveyViewDel : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDSURVEYVIEWDEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDSURVEYVIEWDEL_INVOKE_OFFSET))(arg, str, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDSURVEYVIEWDEL_BEGININVOKE_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDSURVEYVIEWDEL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

