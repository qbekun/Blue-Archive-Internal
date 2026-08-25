#pragma once
#include "unitysdk.h"

namespace FlatData { class TBGThemaType; }
namespace UnityEngine { class GameObject; }
namespace MX::Data { class ITBGThemaInfo; }

#define MAPMARKER_ISTHEMAMATCH_OFFSET UNITYSDK_OFFSET(0xB3F250)
#define MAPMARKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB3F360)

	inline static constexpr unsigned int MapMarker_TypeDefinitionIndex = 8325;

	class MapMarker : public Il2CppObject
	{
	public:
		::System::Int32 ThemaIndex; // 0x10
		::FlatData::TBGThemaType* ThemaType; // 0x14
		::UnityEngine::GameObject* MarkerObject; // 0x18

		::System::Boolean IsThemaMatch(::MX::Data::ITBGThemaInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ITBGThemaInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MAPMARKER_ISTHEMAMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAPMARKER_.CTOR_OFFSET))(nullptr);
		}

	};

