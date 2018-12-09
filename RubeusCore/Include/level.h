#pragma once

#include <world.h>
#include <audio_manager_component.h>
#include <input_manager.h>

namespace Rubeus
{
	class REngine;

	class RLevel
	{
	protected:
		RWorld * m_World;
		RInputManager * m_InputManager;
		AudioComponents::RSymphony * m_AudioManager;
		std::string m_Name;

		friend class REngine;

	public:
		static std::unordered_map<std::string, RLevel *> InstantiatedLevels;

		RLevel(std::string name);
		~RLevel();

		virtual void submitObject(RGameObject * gameObject);
		virtual void begin();
		virtual void run();
		void cleanUp();
		virtual void onEnd();

		void addGameObject(RGameObject * gameObject);

		inline std::string getName() const { return m_Name; }
	};
}
