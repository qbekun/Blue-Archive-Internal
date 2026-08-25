#pragma once
#include "../unitysdk.h"

namespace FlatData { class JudgeGrade; }

namespace FlatData
{
	inline static constexpr unsigned int JudgeGrade_TypeDefinitionIndex = 9469;

	class JudgeGrade : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::JudgeGrade* None; // 0x0
		::FlatData::JudgeGrade* Miss; // 0x0
		::FlatData::JudgeGrade* Attack; // 0x0
		::FlatData::JudgeGrade* Critical; // 0x0

	};
}

