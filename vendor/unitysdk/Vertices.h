#pragma once
#include "unitysdk.h"

#define VERTICES_.CTOR_OFFSET UNITYSDK_OFFSET(0x95C2D30)

	inline static constexpr unsigned int Vertices_TypeDefinitionIndex = 35055;

	class Vertices : public Il2CppObject
	{
	public:
		::System::Int32 length; // 0x10
		::Il2CppArray<::System::Object*>* bones; // 0x18
		::Il2CppArray<::System::Object*>* vertices; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTICES_.CTOR_OFFSET))(nullptr);
		}

	};

