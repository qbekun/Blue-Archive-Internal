#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int Shape_TypeDefinitionIndex = 36927;

	class Shape : public Il2CppObject
	{
	public:
		Seed4* m_Random; // 0x10
		::System::Single m_RadiusTimer; // 0x50
		::System::Single m_RadiusTimerPrev; // 0x54
		::System::Single m_ArcTimer; // 0x58
		::System::Single m_ArcTimerPrev; // 0x5C
		::System::Single m_MeshSpawnTimer; // 0x60
		::System::Single m_MeshSpawnTimerPrev; // 0x64
		::System::Int32 m_OrderedMeshVertexIndex; // 0x68

	};

