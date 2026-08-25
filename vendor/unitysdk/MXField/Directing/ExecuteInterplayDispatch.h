#pragma once
#include "../../unitysdk.h"

#define MXFIELD_DIRECTING_EXECUTEINTERPLAYDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC9380)
#define MXFIELD_DIRECTING_EXECUTEINTERPLAYDISPATCH_GET_INTERPLAYID_OFFSET UNITYSDK_OFFSET(0xEC93C0)
#define MXFIELD_DIRECTING_EXECUTEINTERPLAYDISPATCH_GET_FINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xEC93D0)

namespace MXField::Directing
{
	inline static constexpr unsigned int ExecuteInterplayDispatch_TypeDefinitionIndex = 10902;

	class ExecuteInterplayDispatch : public Il2CppObject
	{
	public:
		::System::Int64 _InterplayId_k__BackingField; // 0x18
		::System::Action* _FinishedCallback_k__BackingField; // 0x20

		::System::Void .ctor(::System::Object* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_EXECUTEINTERPLAYDISPATCH_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_InterplayId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_EXECUTEINTERPLAYDISPATCH_GET_INTERPLAYID_OFFSET))(nullptr);
		}

		::System::Action* get_FinishedCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_EXECUTEINTERPLAYDISPATCH_GET_FINISHEDCALLBACK_OFFSET))(nullptr);
		}

	};
}

