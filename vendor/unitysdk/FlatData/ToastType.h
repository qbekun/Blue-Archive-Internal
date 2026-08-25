#pragma once
#include "../unitysdk.h"

namespace FlatData { class ToastType; }

namespace FlatData
{
	inline static constexpr unsigned int ToastType_TypeDefinitionIndex = 9649;

	class ToastType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::ToastType* None; // 0x0
		::FlatData::ToastType* Tactic_Left; // 0x0
		::FlatData::ToastType* Tactic_Right; // 0x0
		::FlatData::ToastType* Social_Center; // 0x0
		::FlatData::ToastType* Social_Mission; // 0x0
		::FlatData::ToastType* Social_Right; // 0x0
		::FlatData::ToastType* Notice_Center; // 0x0
		::FlatData::ToastType* PC_LeftCenter; // 0x0

	};
}

