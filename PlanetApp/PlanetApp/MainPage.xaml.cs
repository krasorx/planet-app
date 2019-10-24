using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

namespace PlanetApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private async void NewGame_OnClicked(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new NewGamePage());
        }

        private async void LoadGame_Clicked(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new LoadGamePage());
        }

        private void LoadGame_Clicked_1(object sender, EventArgs e)
        {

        }
    }
}
