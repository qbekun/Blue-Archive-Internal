#pragma once
#include "unitysdk.h"

#define SEGMENT_SETRUNNINGINDEXANDNEXT_OFFSET UNITYSDK_OFFSET(0x9071C90)
#define SEGMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9071F60)
#define SEGMENT_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x9071FA0)
#define SEGMENT_RESET_OFFSET UNITYSDK_OFFSET(0x9071CF0)

	inline static constexpr unsigned int Segment_TypeDefinitionIndex = 35456;

	class Segment : public ::NPA::Auth::PushPolicy::NXPToyGetPolicyAgreeStatement
	{
	public:
		::System::Boolean returnToPool; // 0x30

		::System::Void SetRunningIndexAndNext(::System::Int64 arg, Segment* arg)
		{
			((::System::Void(*)(::System::Int64, Segment*, ::PVOID))((::PBYTE)hIl2Cpp + SEGMENT_SETRUNNINGINDEXANDNEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEGMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetBuffer(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SEGMENT_SETBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SEGMENT_RESET_OFFSET))(nullptr);
		}

	};

