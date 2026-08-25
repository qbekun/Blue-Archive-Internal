#pragma once
#include "../../unitysdk.h"

#define MXFIELD_DISPATCH_DISPATCHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB1390)
#define MXFIELD_DISPATCH_DISPATCHTYPE_GET_SENDER_OFFSET UNITYSDK_OFFSET(0xEC8640)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int DispatchType_TypeDefinitionIndex = 10891;

	class DispatchType : public Il2CppObject
	{
	public:
		::System::Object* _Sender_k__BackingField; // 0x10

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Sender()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_DISPATCHTYPE_GET_SENDER_OFFSET))(nullptr);
		}

	};
}

