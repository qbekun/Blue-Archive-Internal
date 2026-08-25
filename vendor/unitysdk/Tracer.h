#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int Tracer_TypeDefinitionIndex = 25425;

	class Tracer : public Il2CppObject
	{
	public:
		::System::String* path; // 0x10
		::System::String* klass; // 0x18
		::System::String* func; // 0x20
		::System::String* line; // 0x28

	};

