#pragma once
#include "unitysdk.h"

#define ADDINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96691E0)
#define ADDINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x9669010)

	inline static constexpr unsigned int AddInt32_TypeDefinitionIndex = 33121;

	class AddInt32 : public <>c__DisplayClass145_0
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ADDINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDINT32_.CTOR_OFFSET))(nullptr);
		}

	};

