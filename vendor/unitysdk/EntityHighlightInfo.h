#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Material; }

#define ENTITYHIGHLIGHTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6D40)

	inline static constexpr unsigned int EntityHighlightInfo_TypeDefinitionIndex = 2971;

	class EntityHighlightInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Material* Material; // 0x10
		::Il2CppArray<::System::Object*>* Keywords; // 0x18
		::Il2CppArray<::System::Object*>* Properties; // 0x20
		::System::Int32 RenderQueue; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITYHIGHLIGHTINFO_.CTOR_OFFSET))(nullptr);
		}

	};

