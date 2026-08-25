#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCPlayerModel; }
namespace MXUnderCover { class UCPlayer; }

#define <>C__DISPLAYCLASS34_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xD8AC60)
#define <>C__DISPLAYCLASS34_1__CREATEVISUAL_B__2_OFFSET UNITYSDK_OFFSET(0xD8AC70)

	inline static constexpr unsigned int <>c__DisplayClass34_1_TypeDefinitionIndex = 9697;

	class <>c__DisplayClass34_1 : public Il2CppObject
	{
	public:
		::System::Boolean complete; // 0x10
		::MXUnderCover::UCPlayerModel* model; // 0x18
		Il2CppObject* op; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CreateVisual_b__2(::MXUnderCover::UCPlayer* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCPlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS34_1__CREATEVISUAL_B__2_OFFSET))(arg, nullptr);
		}

	};

